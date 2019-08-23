using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace LinQpractice
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'linQpracDataSet.Info' table. You can move, or remove it, as needed.
            this.infoTableAdapter.Fill(this.linQpracDataSet.Info);

        }

        public void LoadInfo()
        {
            linqDataContext db = new linqDataContext();

            var result = from c in db.Infos select c;
            List<Info> lstInfo = result.ToList();
            dataGridView.DataSource = lstInfo;
        }

        private void setBtn_Click(object sender, EventArgs e)
        {
            for_query.QueryHolder q = new for_query.QueryHolder();

            q.SetQuery(nameTxt.Text, idTxt.Text, passTxt.Text);

            nameTxt.Text = " ";
            idTxt.Text = " ";
            passTxt.Text = " ";

            LoadInfo();
        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void loginBtn_Click(object sender, EventArgs e)
        {

        }
    }
}
